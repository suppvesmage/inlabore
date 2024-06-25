  auto bcs = absl::make_unique<bcs::Reader>(data);
  const auto histories = bcs->de<std::vector<GameHistory8192>>(data);  
